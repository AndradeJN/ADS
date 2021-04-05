/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadoscontrole;

import java.sql.SQLException;
import java.util.List;
import revisaodm2021m.dadosbean.PessoaFisica;
import revisaodm2021m.dadosdao.DaoPessoaFisica;

/**
 *
 * @author User
 */
public class ControlePessoaFisica {

    static DaoPessoaFisica daoP;
    
    public ControlePessoaFisica() throws SQLException, ClassNotFoundException {
        daoP = new DaoPessoaFisica();
    }

    public PessoaFisica inserir(PessoaFisica p) throws SQLException {
        return daoP.inserir(p);
    }
    
    public PessoaFisica alterar(PessoaFisica p) throws SQLException {
        return daoP.alterar(p);
    }

    public List<PessoaFisica> listar(PessoaFisica p) throws SQLException {
        return daoP.listar(p);
    }

    public PessoaFisica buscar(PessoaFisica p) throws SQLException {
        return daoP.buscar(p);
    }

    public PessoaFisica excluir(PessoaFisica p) throws SQLException {
        return daoP.excluir(p);
    }


}
