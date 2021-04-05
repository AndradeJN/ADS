/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fatorial;

import javax.swing.JOptionPane;

/**
 *
 * @author JOSENETOGUIMARAESAND
 * 
 * Criar um programa que retorne o fatorial de um 
 * nÃºmero, usando um mÃ©todo que receba um valor e 
 * retorne o fatorial desse valor.
 * Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120
 * 
 * 
 */
public class Fatorial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        

        int i, count;
        String ler;
       
        try
        {           
            ler = JOptionPane.showInputDialog("Digite um número");
            int n = Integer.parseInt(ler);
            
            count = 0;
            for (i = 2; i <= n/2; i++)
            {
                if(n % i == 0)
                {
                    count++; //Armazenna 
                    break;
                }
            }
            if(count == 0 && n != 1 ) //Testa se o nÃºmero pelo qual a divis]ao foi possÃ­vel Ã© o pÃ³prio nÃºmero
            {
                System.out.println("Não é um nnúmero primo");
            }
            else{
                System.out.println("É um número primo");
            }
        }
       
        catch(NumberFormatException ex)
        {
               JOptionPane.showMessageDialog(null,"Digite apenas numeros ");
        }
    }
    
}
