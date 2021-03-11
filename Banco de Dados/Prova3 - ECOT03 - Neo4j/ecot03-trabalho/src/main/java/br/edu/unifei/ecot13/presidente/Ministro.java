package br.edu.unifei.ecot13.presidente;

import java.util.Date;

import org.neo4j.ogm.annotation.NodeEntity;
import org.neo4j.ogm.annotation.Relationship;
import org.neo4j.ogm.annotation.typeconversion.DateLong;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Ministro extends Pessoa{

	private static final long serialVersionUID = 5746746221354793079L;

	@DateLong
	private Date dataNomeacao;
	@Relationship(type = "CONTRATA", direction = Relationship.OUTGOING)
	private Secretario secretario;

}
