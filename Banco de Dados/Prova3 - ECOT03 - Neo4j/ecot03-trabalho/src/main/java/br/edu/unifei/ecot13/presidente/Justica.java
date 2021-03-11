package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Justica extends Ministro {
	
	private static final long serialVersionUID = 9116589941395434038L;
	private Float qtdPresidios;
	
	public void legalizaArmas() {
		System.out.println("A partir do m�s de julho, armas ser�o liberadas para todo cidad�o de bem!");
	}
}
