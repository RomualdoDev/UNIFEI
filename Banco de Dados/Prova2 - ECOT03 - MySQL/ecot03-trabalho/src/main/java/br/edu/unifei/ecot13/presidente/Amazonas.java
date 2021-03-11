package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Amazonas extends Estado {

	private static final long serialVersionUID = -5360997043850323805L;
	private float taxaDesmatamento;
	
	@Override
	public void atualiza(double v) {
		this.verba = v*0.951;

	}

}
