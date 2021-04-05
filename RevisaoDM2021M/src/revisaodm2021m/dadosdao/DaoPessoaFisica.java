/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadosdao;


import java.util.List;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import revisaodm2021m.dadosbean.PessoaFisica;
import revisaodm2021m.util.ConexaoDb;

/**
 *
 * @author ProfAlexandre
 */
public class DaoPessoaFisica {
   
    private final Connection c;
   
    public DaoPessoaFisica() throws SQLException, ClassNotFoundException{
        this.c = new ConexaoDb().getConnection();
    }
   
    public PessoaFisica buscar (PessoaFisica p) throws SQLException {
        String sql = "select * from pef_pessoa_fis WHERE pef_id = ?";
        PessoaFisica retorno;
        // seta os valores
        try (PreparedStatement stmt = this.c.prepareStatement(sql)) {
            // seta os valores
            stmt.setInt(1,p.getId());
            // executa
            ResultSet rs = stmt.executeQuery();
            retorno = null;
            while (rs.next()) {
                // criando o objeto Usuario
                retorno = new PessoaFisica(
                        rs.getInt(1),
                        rs.getString(2),
                        rs.getString(3));
                // adiciona o usu à lista de pessoa
            }
        }
            c.close();
        return retorno;
    }

    public PessoaFisica inserir (PessoaFisica p) throws SQLException {
        String sql = "insert into pef_pessoa_fis" + " (pef_cpf,pef_endereco)" + " values (?,?)";
   
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql,Statement.RETURN_GENERATED_KEYS)) {
            // seta os valores
            stmt.setString(1,p.getCpf());
            stmt.setString(2,p.getEnd());
            // executa
            stmt.executeUpdate();
            ResultSet rs = stmt.getGeneratedKeys();
            if (rs.next()) {
                int id = rs.getInt(1);
                p.setId(id);
            }
        }
        c.close();
        return p;
    }

    public PessoaFisica alterar (PessoaFisica p) throws SQLException {
        String sql = "UPDATE pef_pessoa_fis SET pef_cpf = ?, pef_endereco = ?, WHERE pef_id = ?";
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql)) {
            // seta os valores
            stmt.setString(1,p.getCpf());
            stmt.setString(2,p.getEnd());
            stmt.setInt(3,p.getId());
            
            // executa
            stmt.execute();
        }
        return p;

    }

    public PessoaFisica excluir (PessoaFisica p) throws SQLException {
         String sql = "delete from pef_pessoa_fis WHERE pef_id = ?";
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql)) {
            // seta os valores
            stmt.setInt(1,p.getId());
            // executa
            stmt.execute();
        }
        c.close();
        return p;
    }

    public List<PessoaFisica> listar (PessoaFisica p) throws SQLException {
         // usus: array armazena a lista de registros
        List<PessoaFisica> pes = new ArrayList<>();
       
        String sql = "select * from pef_pessoa_fis where pef_cpf like ?";
        // seta os valores
        try (PreparedStatement stmt = this.c.prepareStatement(sql)) {
            // seta os valores
            stmt.setString(1,"%" + p.getCpf() + "%");
            
            ResultSet rs = stmt.executeQuery();
            
            while (rs.next()) {
                // criando o objeto Usuario
                PessoaFisica pSaida = new PessoaFisica(
                        rs.getInt(1),
                        rs.getString(2),
                        rs.getString(3));
                // adiciona o usu à lista de usus
                pes.add(pSaida);
            }
            
            rs.close();
        }
        return pes;
    }
}