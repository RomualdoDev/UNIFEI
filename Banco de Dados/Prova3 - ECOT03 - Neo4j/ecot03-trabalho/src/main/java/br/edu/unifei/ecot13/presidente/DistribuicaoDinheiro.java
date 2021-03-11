package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

import org.neo4j.ogm.annotation.GeneratedValue;
import org.neo4j.ogm.annotation.Id;
import org.neo4j.ogm.annotation.NodeEntity;
import org.neo4j.ogm.annotation.Relationship;

import lombok.Data;
@Data
@NodeEntity
public abstract class DistribuicaoDinheiro implements Serializable{
	
	private static final long serialVersionUID = 1816623242190731066L;
	@Id
	@GeneratedValue
	private Long id;
	@Relationship(type = "REPASSA", direction = Relationship.OUTGOING)
	private List<Estado> estados = new ArrayList<>();
	

	protected void notifica(double v) {
		for(Estado e : estados) {
			e.atualiza(v);
		}
	}
}
