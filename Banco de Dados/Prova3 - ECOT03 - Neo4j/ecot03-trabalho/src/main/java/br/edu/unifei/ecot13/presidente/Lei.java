package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import org.neo4j.ogm.annotation.Id;
import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;

@Data
@NodeEntity
public class Lei implements Serializable{
	
	private static final long serialVersionUID = 1222190555674926336L;
	@Id
	private String numero;
	private String nome;
	
}
