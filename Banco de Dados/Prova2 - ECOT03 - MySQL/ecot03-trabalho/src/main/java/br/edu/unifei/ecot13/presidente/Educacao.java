package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Educacao extends Ministro {
	private static final long serialVersionUID = 5600589776865786515L;
	private float qtdEscolas;

	public void requisitaInsumosEducacionais() {
		System.out.println("Quero mais dinheiro para a merenda!");
	}
}
