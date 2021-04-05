/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadostelas;

import java.sql.SQLException;
import java.util.List;
import javax.swing.JOptionPane;
import revisaodm2021m.dadosbean.Pessoa;
import revisaodm2021m.dadoscontrole.ControlePessoa;

/**
 *
 * @author User
 */
public class ManterPessoa {
    
    static int id;
    static String  nome;
    static String idade;
    static String genero;
    static String peso;
    static String altura;

    static ControlePessoa contP;

    public static void Cadastrar() throws SQLException, ClassNotFoundException {
        nome    =   JOptionPane.showInputDialog("NOME");
        idade   =   JOptionPane.showInputDialog("IDADE");
        genero  =   JOptionPane.showInputDialog("GENERO");
        peso    =   JOptionPane.showInputDialog("PESO");
        altura  =   JOptionPane.showInputDialog("ALTURA");
        Pessoa pEntrada = new Pessoa(nome,idade,genero,peso,altura);
        contP = new ControlePessoa();
        Pessoa pSaida = contP.inserir(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }
    
    public static void Listar() throws SQLException, ClassNotFoundException {
        nome    =   JOptionPane.showInputDialog("NOME");
        Pessoa pEntrada = new Pessoa(nome);
        contP = new ControlePessoa();
        List<Pessoa> pssSaida = contP.listar(pEntrada);
        pssSaida.forEach((pessL) -> {
            JOptionPane.showMessageDialog(null,pessL.toString());
        });
    }

        
    public static void Alterar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        nome    =   JOptionPane.showInputDialog("NOME");
        idade   =   JOptionPane.showInputDialog("IDADE");
        genero  =   JOptionPane.showInputDialog("GENERO");
        peso    =   JOptionPane.showInputDialog("PESO");
        altura  =   JOptionPane.showInputDialog("ALTURA");
        Pessoa pEntrada = new Pessoa(id,nome,idade,genero,peso,altura);
        contP = new ControlePessoa();
        Pessoa pSaida = contP.alterar(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

    public static void Buscar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Pessoa pEntrada = new Pessoa(id);
        contP = new ControlePessoa();
        Pessoa pSaida = contP.buscar(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

    public static void Excluir() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Pessoa pEntrada = new Pessoa(id);
        contP = new ControlePessoa();
        Pessoa pSaida = contP.excluir(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

}
