package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Justica extends Ministro {
	
	private static final long serialVersionUID = 9116589941395434038L;
	private float qtdPresidios;
	
	public void legalizaArmas() {
		System.out.println("A partir do m�s de julho, armas ser�o liberadas para todo cidad�o de bem!");
	}
}
