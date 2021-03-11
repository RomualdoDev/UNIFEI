package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Pernambuco extends Estado {

	private static final long serialVersionUID = 6390199902633448753L;
	private float qtdPraias;

	@Override
	public void atualiza(double v) {
		this.verba = v*0.795;

	}

}
