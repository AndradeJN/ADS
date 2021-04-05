/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadoscontrole;

import java.sql.SQLException;
import java.util.List;
import revisaodm2021m.dadosbean.Departamento;
import revisaodm2021m.dadosdao.DaoDepartamento;

public class ControleDepartamento {
    
    static DaoDepartamento daoD;
    
    public ControleDepartamento () throws SQLException, ClassNotFoundException {
        daoD = new DaoDepartamento();
    }

    public Departamento inserir(Departamento d) throws SQLException {
        return daoD.inserir(d);
    }
    
    public Departamento alterar(Departamento d) throws SQLException {
        return daoD.alterar(d);
    }

    public List<Departamento> listar(Departamento d) throws SQLException {
        return daoD.listar(d);
    }

    public Departamento buscar(Departamento d) throws SQLException {
        return daoD.buscar(d);
    }

    public Departamento excluir(Departamento d) throws SQLException {
        return daoD.excluir(d);
    }

    
}