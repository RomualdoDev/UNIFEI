package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class RioDeJaneiro extends Estado {

	private static final long serialVersionUID = 6440601733344331629L;
	private float qtdAssaltos;

	@Override
	public void atualiza(double v) {
		this.verba = v*0.1436;

	}

}
