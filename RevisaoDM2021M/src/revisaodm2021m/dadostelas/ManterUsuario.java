/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadostelas;

import java.sql.SQLException;
import java.util.List;
import javax.swing.JOptionPane;
import revisaodm2021m.dadosbean.Usuario;
import revisaodm2021m.dadoscontrole.ControleUsuario;


/**
 *
 * @author User
 */
public class ManterUsuario {
    
    static int id;
    static String login;
    static String senha;
    static String status;
    static String tipo;

    static ControleUsuario contU;

    public static void Cadastrar() throws SQLException, ClassNotFoundException {
        login    =   JOptionPane.showInputDialog("LOGIN");
        senha   =   JOptionPane.showInputDialog("SENHA");
        status  =   JOptionPane.showInputDialog("STATUS");
        tipo    =   JOptionPane.showInputDialog("TIPO");
        Usuario uEntrada = new Usuario(login,senha,status,tipo);
        contU = new ControleUsuario();
        Usuario uSaida = contU.inserir(uEntrada);
        JOptionPane.showMessageDialog(null, uSaida.toString());
    }
    
    public static void Listar() throws SQLException, ClassNotFoundException {
        login    =   JOptionPane.showInputDialog("LOGIN");
        Usuario uEntrada = new Usuario(login);
        contU = new ControleUsuario();
        List<Usuario> ussSaida = contU.listar(uEntrada);
        ussSaida.forEach((usuL) -> {
            JOptionPane.showMessageDialog(null,usuL.toString());
        });
    }

    public static void Alterar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        login    =   JOptionPane.showInputDialog("LOGIN");
        senha   =   JOptionPane.showInputDialog("SENHA");
        status  =   JOptionPane.showInputDialog("STATUS");
        tipo    =   JOptionPane.showInputDialog("TIPO");
        Usuario uEntrada = new Usuario(id,login,senha,status,tipo);
        contU = new ControleUsuario();
        Usuario uSaida = contU.alterar(uEntrada);
        JOptionPane.showMessageDialog(null, uSaida.toString());
    }

    public static void Buscar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Usuario uEntrada = new Usuario(id);
        contU = new ControleUsuario();
        Usuario uSaida = contU.buscar(uEntrada);
        JOptionPane.showMessageDialog(null, uSaida.toString());
    }

    public static void Excluir() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        Usuario uEntrada = new Usuario(id);
        contU = new ControleUsuario();
        Usuario uSaida = contU.excluir(uEntrada);
        JOptionPane.showMessageDialog(null, uSaida.toString());
    }
    
}
