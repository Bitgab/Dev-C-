/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.atividade14;

/**
 *
 * @author aluno.den
 */
class Pessoa {
     private String nome;
    private int idade;
    
    public Pessoa(){
 
    }
     public void setNome(String nome ) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }
    
    public void setIdade( int idade){
        this.idade = idade;
    }
    public  int getIdade(){
        return idade;
    }
    public String toString() {
        return nome + " - " + idade + " anos";
    }
            
}
