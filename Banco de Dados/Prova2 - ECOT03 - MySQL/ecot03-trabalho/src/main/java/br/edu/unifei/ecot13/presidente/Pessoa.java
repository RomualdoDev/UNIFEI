package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import javax.persistence.Entity;
import javax.persistence.Id;

import lombok.Data;
@Data
@Entity
public class Pessoa implements Serializable{
	
	private static final long serialVersionUID = -4694263333622526014L;
	private String nome;
	private int idade;
	@Id
	private String cpf; 
	private String rg;
	private String partido;
	
		
}
