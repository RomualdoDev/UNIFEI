package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.ManyToMany;

import lombok.Data;
@Data
@Entity
public abstract class DistribuicaoDinheiro implements Serializable{
	
	private static final long serialVersionUID = 1816623242190731066L;
	@Id
	@GeneratedValue
	private int id;
	@ManyToMany(cascade=CascadeType.ALL)
	private List<Estado> estados = new ArrayList<>();
	

	protected void notifica(double v) {
		for(Estado e : estados) {
			e.atualiza(v);
		}
	}
}
