/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadoscontrole;

import java.sql.SQLException;
import java.util.List;
import revisaodm2021m.dadosbean.Pessoa;
import revisaodm2021m.dadosdao.DaoPessoa;

/**
 *
 * @author User
 */
public class ControlePessoa {
    
    static DaoPessoa daoP;
    
    public ControlePessoa() throws SQLException, ClassNotFoundException {
        daoP = new DaoPessoa();
    }

    public Pessoa inserir(Pessoa p) throws SQLException {
        return daoP.inserir(p);
    }
    
    public Pessoa alterar(Pessoa p) throws SQLException {
        return daoP.alterar(p);
    }

    public List<Pessoa> listar(Pessoa p) throws SQLException {
        return daoP.listar(p);
    }

    public Pessoa buscar(Pessoa p) throws SQLException {
        return daoP.buscar(p);
    }

    public Pessoa excluir(Pessoa p) throws SQLException {
        return daoP.excluir(p);
    }

    
}
