package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import org.neo4j.ogm.annotation.Id;

import lombok.Data;

@Data
public abstract class Pessoa implements Serializable{
	
	private static final long serialVersionUID = -4694263333622526014L;
	private String nome;
	private Integer idade;
	@Id
	private String cpf; 
	private String rg;
	private String partido;
	
		
}
