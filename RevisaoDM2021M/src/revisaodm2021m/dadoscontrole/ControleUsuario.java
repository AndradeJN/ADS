/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadoscontrole;

import java.sql.SQLException;
import java.util.List;
import revisaodm2021m.dadosbean.Usuario;
import revisaodm2021m.dadosdao.DaoUsuario;

/**
 *
 * @author User
 */
public class ControleUsuario {

    static DaoUsuario daoU;
    
    public ControleUsuario() throws SQLException, ClassNotFoundException {
        daoU = new DaoUsuario();
    }

    public Usuario inserir(Usuario uEntrada) throws SQLException {
        return daoU.inserir(uEntrada);
    }

    public List<Usuario> listar(Usuario uEntrada) throws SQLException {
        return daoU.listar(uEntrada);
    }

    public Usuario alterar(Usuario uEntrada) throws SQLException {
        return daoU.alterar(uEntrada);
    }

    public Usuario buscar(Usuario uEntrada) throws SQLException {
        return daoU.buscar(uEntrada);
    }

    public Usuario excluir(Usuario uEntrada) throws SQLException {
        return daoU.excluir(uEntrada);
    }
    
}
