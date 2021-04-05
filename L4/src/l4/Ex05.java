/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package l4;

import javax.swing.JOptionPane;

/**
 *
 * @author JOSENETOGUIMARAESAND
 */
public class Ex05 {

    static void convMeses(int a) {

        int mes = a;

        switch (mes) {
            case 1:
                JOptionPane.showMessageDialog(null, "O mês correspondente é janeiro !");
                break;
            case 2:
                JOptionPane.showMessageDialog(null, "O mês correspondente é fevereiro !");
                break;
            case 3:
                JOptionPane.showMessageDialog(null, "O mês correspondente é março !");
                break;
            default:
                JOptionPane.showMessageDialog(null, "Invalido, o mês não corresponde meses do primeiro trimestre do ano.");

        }

    }

    public static void main(String[] args) {

        int meses;

        meses = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o valor corresponde a um mês do primeiro trimestre do ano. "));
        convMeses(meses);
    }

}
