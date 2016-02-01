package br.uff.si.poo;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.*;

public class Prova {
    
    private String curso;
    private String nomeDisciplina;
    private String codigoDisciplina;
    private String dataRealizacao;
    private int qntQuestoes = 0;
    private List<Questao> questoes = new ArrayList<Questao>();
    
    public Prova() {
        
    }
    
    public Prova(String curso, String nomeDisciplina, String codigoDisciplina, String dataRealizacao) {
        this.curso = curso;
        this.nomeDisciplina = nomeDisciplina;
        this.codigoDisciplina = codigoDisciplina;
        this.dataRealizacao = dataRealizacao;
    }
    
    public String getCurso() {
        return curso;
    }
    
    public void setCurso(String curso) {
        this.curso = curso;
    }
    
    public String getNomeDisciplina() {
        return nomeDisciplina;
    }
    
    public void setNomeDisciplina(String nomeDisciplina) {
        this.nomeDisciplina = nomeDisciplina;
    }
    
    public String getCodigoDisciplina() {
        return codigoDisciplina;
    }
    
    public void setCodigoDisciplina(String codigoDisciplina) {
        this.codigoDisciplina = codigoDisciplina;
    }
    
    public String getDataRealizacao() {
        return dataRealizacao;
    }
    
    public void setDataRealizacao(String dataRealizacao) {
        this.dataRealizacao = dataRealizacao;
    }
    
    public int getQntQuestoes() {
        return qntQuestoes;
    }
       
    public List<Questao> getQuestoes() {
        return questoes;
    }
    
    public void setQuestoes(List<Questao> questoes) {
        this.questoes = questoes;
    }

    public void addQuestao(Questao q) {
        this.questoes.add(q);
        this.qntQuestoes ++;
    }

    public void LerProva(String filepath) {
        try {
            FileReader arq = new FileReader(filepath);
            BufferedReader lerArq = new BufferedReader(arq);
            String linha ;
            do {
                linha = lerArq.readLine();
                if (linha.startsWith("[Prova]")) {
                    linha = lerArq.readLine();
                    while (!linha.startsWith("[")) {
                        if (linha.startsWith("Curso:")) {
                            this.curso = linha.split(":")[1].trim();
                            linha = lerArq.readLine();
                        } else if (linha.startsWith("Nome da Disciplina:")) {
                            this.curso = linha.split(":")[1].trim();
                            linha = lerArq.readLine();
                        } else if (linha.startsWith("Código da Disciplina:")) {
                            this.curso = linha.split(":")[1].trim();
                            linha = lerArq.readLine();
                        } else if (linha.startsWith("Data de Realização:")) {
                            this.curso = linha.split(":")[1].trim();
                            linha = lerArq.readLine();
                        }
                    }
                }
                while (linha.startsWith("[Questão]")) {
                    Questao q = new Questao();
                    linha = lerArq.readLine();
                    if (linha.startsWith("Número:")) {
                        q.setNumero(Integer.parseInt(linha.split(":")[1].trim()));
                        linha = lerArq.readLine();
                    }
                    if (linha.startsWith("Enunciado:")) {
                        q.setEnunciado(linha.split(":")[1].trim());
                        linha = lerArq.readLine();
                    }            
                    this.addQuestao(q);
                }
                
            } while (linha != null);
            
        } catch (IOException ioE) {
            System.out.println("ERRO! -> " + ioE.getMessage());
        } catch (NullPointerException npE) {
            //System.out.println("ERRO! -> " + npE.getMessage());
        }
        
    }
}
