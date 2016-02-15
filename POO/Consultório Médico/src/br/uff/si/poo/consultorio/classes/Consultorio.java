package br.uff.si.poo.consultorio.classes;
import java.util.*;
import br.uff.si.poo.*;
public class Consultorio {
    private String nomeFantasia = "";
    private String razaoSocial = "";
    private String cnpj = "";
    private Endereco endereco = new Endereco();
    private List<Paciente> pacientes = new ArrayList<Paciente>();
    private List<Consulta> consultas = new ArrayList<Consulta>();
    private List<Medico> medicos = new ArrayList<Medico>();
    private List<Atendente> atendentes = new ArrayList<Atendente>();
    
    public Consultorio() {
        super();
    }
}
