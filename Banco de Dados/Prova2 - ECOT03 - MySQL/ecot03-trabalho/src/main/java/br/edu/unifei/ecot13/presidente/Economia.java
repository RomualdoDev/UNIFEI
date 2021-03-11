package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Economia extends Ministro {

	private static final long serialVersionUID = -8505526330564863888L;
	private float dividaPais;
	
	public void aprovaOrcamento() {
		System.out.println("Hoje foi aprovado 2 bilh�es para serem distribuidos aos estados!");
	}
}
