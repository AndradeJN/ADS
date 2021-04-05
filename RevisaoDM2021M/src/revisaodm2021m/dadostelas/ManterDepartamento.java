/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadostelas;

import java.sql.SQLException;
import java.util.List;
import javax.swing.JOptionPane;
import revisaodm2021m.dadosbean.Departamento;
import revisaodm2021m.dadoscontrole.ControleDepartamento;

/**
 *
 * @author User
 */
public class ManterDepartamento {
    
    static int id;
    static String nome;
    static String descricao;
    static String centrocusto;

    static ControleDepartamento contD;

    public static void Cadastrar() throws SQLException, ClassNotFoundException {
        nome    =   JOptionPane.showInputDialog("NOME");
        descricao   =   JOptionPane.showInputDialog("DESCRICAO");
        centrocusto  =   JOptionPane.showInputDialog("CENTROCUSTO");
        Departamento dEntrada = new Departamento(nome,descricao,centrocusto);
        contD = new ControleDepartamento();
        Departamento dSaida = contD.inserir(dEntrada);
        JOptionPane.showMessageDialog(null, dSaida.toString());
    }
    
    public static void Listar() throws SQLException, ClassNotFoundException {
        nome    =   JOptionPane.showInputDialog("NOME");
        Departamento dEntrada = new Departamento(nome);
        contD = new ControleDepartamento();
        List<Departamento> dssSaida = contD.listar(dEntrada);
        dssSaida.forEach((depsL) -> {
            JOptionPane.showMessageDialog(null,depsL.toString());
        });
    }

    public static void Alterar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        nome    =   JOptionPane.showInputDialog("NOME");
        descricao   =   JOptionPane.showInputDialog("DESCRICAO");
        centrocusto  =   JOptionPane.showInputDialog("CENTROCUSTO");
        Departamento dEntrada = new Departamento(id,nome,descricao,centrocusto);
        contD = new ControleDepartamento();
        Departamento dSaida = contD.alterar(dEntrada);
        JOptionPane.showMessageDialog(null, dSaida.toString());
    }

    public static void Buscar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Departamento dEntrada = new Departamento(id);
        contD = new ControleDepartamento();
        Departamento dSaida = contD.buscar(dEntrada);
        JOptionPane.showMessageDialog(null, dSaida.toString());
    }

    public static void Excluir() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Departamento dEntrada = new Departamento(id);
        contD = new ControleDepartamento();
        Departamento dSaida = contD.excluir(dEntrada);
        JOptionPane.showMessageDialog(null, dSaida.toString());
    }

    
}
