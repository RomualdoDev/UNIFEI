package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Turismo extends Ministro {

	private static final long serialVersionUID = 4587320652956342205L;
	private float qtdCidadesTuristicas;
	public void incentivaTurismo() {
		System.out.println("Visite o nosso Brasil!");
	}
}
