package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Bahia extends Estado {

	private static final long serialVersionUID = 6074836281234948096L;
	private float precoAcaraje;
	@Override
	public void atualiza(double v) {
		this.verba = v*0.1237;

	}

}
