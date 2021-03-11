package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

import lombok.Data;

@Data
@Entity
public abstract class Estado implements Serializable{
	
	private static final long serialVersionUID = 7349215507564151956L;
	@Id
	@GeneratedValue
	private int id;
	protected double verba;
	
	public abstract void atualiza(double v);

}
