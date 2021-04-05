/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadostelas;

import java.sql.SQLException;
import java.util.List;
import javax.swing.JOptionPane;
import revisaodm2021m.dadosbean.PessoaFisica;
import revisaodm2021m.dadoscontrole.ControlePessoaFisica;

/**
 *
 * @author User
 */
public class ManterPessoaFisica {
    
    static int id;
    static String cpf;
    static String end;
 
    static ControlePessoaFisica contPf;

    public static void Cadastrar() throws SQLException, ClassNotFoundException {
        cpf    =   JOptionPane.showInputDialog("CPF");
        end   =   JOptionPane.showInputDialog("END");
        PessoaFisica pEntrada = new PessoaFisica(cpf,end);
        contPf = new ControlePessoaFisica();
        PessoaFisica pSaida = contPf.inserir(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }
    
    public static void Listar() throws SQLException, ClassNotFoundException {
        cpf    =   JOptionPane.showInputDialog("CPF");
        PessoaFisica pEntrada = new PessoaFisica(cpf);
        contPf = new ControlePessoaFisica();
        List<PessoaFisica> pssSaida = contPf.listar(pEntrada);
        pssSaida.forEach((pessL) -> {
            JOptionPane.showMessageDialog(null,pessL.toString());
        });
    }

        
    public static void Alterar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        cpf    =   JOptionPane.showInputDialog("CPF");
        end   =   JOptionPane.showInputDialog("END");
        PessoaFisica pEntrada = new PessoaFisica(id,cpf,end);
        contPf = new ControlePessoaFisica();
        PessoaFisica pSaida = contPf.alterar(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

    public static void Buscar() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        PessoaFisica pEntrada = new PessoaFisica(id);
        contPf = new ControlePessoaFisica();
        PessoaFisica pSaida = contPf.buscar(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

    public static void Excluir() throws SQLException, ClassNotFoundException {
        id      =   Integer.parseInt(JOptionPane.showInputDialog("ID"));
        PessoaFisica pEntrada = new PessoaFisica(id);
        contPf = new ControlePessoaFisica();
        PessoaFisica pSaida = contPf.excluir(pEntrada);
        JOptionPane.showMessageDialog(null, pSaida.toString());
    }

}
