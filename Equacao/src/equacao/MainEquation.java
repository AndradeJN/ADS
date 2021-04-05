/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package equacao;

import javax.swing.JOptionPane;

public class MainEquation{

    static public void main() {

        float a = 0, b = 0, c = 0;

        Equacao x = new Equacao(a, b, c);
        x.ler(a, b, c);
        x.delta();
        x.raizDelta();

        JOptionPane.showMessageDialog(null, "O resultado de R1 = " + x.R1 + "O resultado de R2 = " + x.R2);
    }
}
