/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m;

import java.sql.SQLException;
import javax.swing.JOptionPane;
import revisaodm2021m.dadostelas.ManterUsuario;
import revisaodm2021m.dadostelas.ManterDepartamento;
import revisaodm2021m.dadostelas.ManterPessoa;
import revisaodm2021m.dadostelas.ManterPessoaFisica;

/**
 *
 * @author User
 */
public class RevisaoDM2021M {

    /**
     * @param args the command line arguments
     * @throws java.sql.SQLException
     * @throws java.lang.ClassNotFoundException
     */
    public static void main(String[] args) throws SQLException, ClassNotFoundException {
        

        JOptionPane.showMessageDialog(null,"ENTRE 1- Pessoa OU 2- Departamento OU 3-Usuario OU 4-PESSOAFISICA");
        int ops  =   Integer.parseInt(JOptionPane.showInputDialog("OPÇÃO"));

        if(ops == 1) {
            ManterPessoa.Cadastrar();
            ManterPessoa.Buscar();
            ManterPessoa.Alterar();
            ManterPessoa.Listar();
            ManterPessoa.Excluir();
        }

        if(ops == 2) {

            ManterDepartamento.Cadastrar();
            ManterDepartamento.Buscar();
            ManterDepartamento.Alterar();
            ManterDepartamento.Listar();
            ManterDepartamento.Excluir();

        }

        if(ops == 3) {
            ManterUsuario.Cadastrar();
            ManterUsuario.Buscar();
            ManterUsuario.Alterar();
            ManterUsuario.Listar();
            ManterUsuario.Excluir();

        }

        if(ops == 4) {
            ManterPessoaFisica.Cadastrar();
            ManterPessoaFisica.Buscar();
            ManterPessoaFisica.Alterar();
            ManterPessoaFisica.Listar();
            ManterPessoaFisica.Excluir();
        }

        if(ops == 4) {
            //ManterCliente.Cadastrar();
            //ManterCliente.Buscar();
            //ManterCliente.Alterar();
            //ManterCliente.Listar();
            //ManterCliente.Excluir();
        }

        
    }
    
}
