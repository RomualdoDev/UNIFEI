package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import javax.persistence.Entity;
import javax.persistence.Id;

import lombok.Data;

@Data
@Entity
public class Lei implements Serializable{
	
	private static final long serialVersionUID = 1222190555674926336L;
	@Id
	private String numero;
	private String nome;
	
}
