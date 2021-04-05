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
import revisaodm2021m.dadosbean.Departamento;
import revisaodm2021m.util.ConexaoDb;

/**
 *
 * @author ProfAlexandre
 */
public class DaoDepartamento {
   
    private final Connection c;
   
    public DaoDepartamento() throws SQLException, ClassNotFoundException{
        this.c = new ConexaoDb().getConnection();
    }
   
   
    public Departamento buscar (Departamento d) throws SQLException {
        String sql = "select * from dep_departamento WHERE dep_id = ?";
        Departamento retorno;
        // seta os valores
        try (PreparedStatement stmt = this.c.prepareStatement(sql)) {
            // seta os valores
            stmt.setInt(1,d.getId());
            // executa
            ResultSet rs = stmt.executeQuery();
            retorno = null;
            while (rs.next()) {
                // criando o objeto Usuario
                retorno = new Departamento(
                        rs.getInt(1),
                        rs.getString(2),
                        rs.getString(3),
                        rs.getString(4));
                // adiciona o usu à lista de pessoa
            }
        }
            c.close();
        return retorno;
    }

    public Departamento inserir (Departamento d) throws SQLException {
        String sql = "insert into dep_departamento" + " (dep_nome,dep_desc,dep_centrocusto)" + " values (?,?,?) ";
   
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql,Statement.RETURN_GENERATED_KEYS)) {
            // seta os valores
            stmt.setString(1,d.getNome());
            stmt.setString(2,d.getDescricao());
            stmt.setString(3,d.getCentrocusto());
            // executa
            stmt.executeUpdate();
            ResultSet rs = stmt.getGeneratedKeys();
            if (rs.next()) {
                int id = rs.getInt(1);
                d.setId(id);
            }
        }
        c.close();
        return d;
    }

    public Departamento alterar (Departamento d) throws SQLException {
        String sql = "UPDATE dep_departamento SET dep_nome = ?, dep_desc = ?, dep_centrocusto = ? WHERE dep_id = ?";
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql)) {
            // seta os valores
            stmt.setString(1,d.getNome());
            stmt.setString(2,d.getDescricao());
            stmt.setString(3,d.getCentrocusto());
            stmt.setInt(4,d.getId());
            
            // executa
            stmt.execute();
        }
        return d;

    }

    public Departamento excluir (Departamento d) throws SQLException {
         String sql = "delete from dep_departamento WHERE dep_id = ?";
        // seta os valores
        try ( // prepared statement para inserção
                PreparedStatement stmt = c.prepareStatement(sql)) {
            // seta os valores
            stmt.setInt(1,d.getId());
            // executa
            stmt.execute();
        }
        c.close();
        return d;
    }

    public List<Departamento> listar (Departamento d) throws SQLException {
         // usus: array armazena a lista de registros
        List<Departamento> deps = new ArrayList<>();
       
        String sql = "select * from dep_departamento where dep_nome like ?";
        // seta os valores
        try (PreparedStatement stmt = this.c.prepareStatement(sql)) {
            // seta os valores
            stmt.setString(1,"%" + d.getNome()+ "%");
            
            ResultSet rs = stmt.executeQuery();
            
            while (rs.next()) {
                // criando o objeto Usuario
                Departamento dSaida = new Departamento(
                        rs.getInt(1),
                        rs.getString(2),
                        rs.getString(3),
                        rs.getString(4));
                // adiciona o usu à lista de usus
               deps.add(dSaida);
            }
            
            rs.close();
        }
        return deps;
    }
}