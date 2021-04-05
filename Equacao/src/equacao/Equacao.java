/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package equacao;

import javax.swing.JOptionPane;

/**
 *
 * @author JOSENETOGUIMARAESAND
 */
public class Equacao {

    float a, b, c, delta, R1, R2;

    public static float ler(float a, float b, float c){
        a = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a "));
        b = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite b "));
        c = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite c "));
        
        return a+b+c;
    }
    
    public Equacao(float a, float b, float c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    
    public float delta(){
        delta = (b*b) - 4 * a * c;
        return delta;
    } 
    
    
     public float raizDeltaR1(){
        double raiz = Math.pow(delta, 2);
        R1 = (float) ( (-this.b) - (Math.sqrt(raiz) / (2 * this.a)));
        return R1;
    }
     public float raizDeltaR2(){
       double raiz = Math.pow(delta, 2);
        R2 = (float) ( (-this.b) - (Math.sqrt(raiz) / (2 * this.a)));
        return R2;
    }
    
}
