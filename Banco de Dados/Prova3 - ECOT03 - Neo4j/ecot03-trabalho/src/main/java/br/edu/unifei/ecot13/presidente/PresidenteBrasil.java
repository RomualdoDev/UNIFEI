package br.edu.unifei.ecot13.presidente;

import java.util.ArrayList;
import java.util.GregorianCalendar;
import java.util.List;

import org.neo4j.ogm.annotation.NodeEntity;
import org.neo4j.ogm.annotation.Relationship;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class PresidenteBrasil extends Pessoa {

	private static final long serialVersionUID = -2836484151998545823L;
	private Integer anoMandato;
	@Relationship(type = "NOMEA", direction = Relationship.OUTGOING)
	private List<Ministro> ministros = new ArrayList<>();

	@Relationship(type = "FAZ", direction = Relationship.OUTGOING)
	private List<Pronunciamento> pronunciamento = new ArrayList<>();
	
	@Relationship(type = "APROVA", direction = Relationship.OUTGOING)
	private List<Lei> lei = new ArrayList<>();

	@Relationship(type = "CREDITA", direction = Relationship.OUTGOING)
	private List<Orcamento> orcamento =  new ArrayList<>();

		
	public void nomeiaMinistro(Ministro min) {
		ministros.add(min);
	}
	
	public void aprovaLei(String num, String nome) {
		Lei l = new Lei();
		l.setNome(nome);
		l.setNumero(num);
		System.out.println("Lei: "+ num + " - "+ nome +" aprovada!");
		lei.add(l);
	}
	
	public void fazPronunciamento(String assunto) {
		Pronunciamento p = new Pronunciamento();
		p.setDia(new GregorianCalendar().getTime());
		p.setAssunto(assunto);
		System.out.println("Assunto do pronunciamento:" + assunto);
		pronunciamento.add(p);
	}
	
	public void repassaOrcamento(double orc) {
				
		Orcamento o = new Orcamento();
		o.getEstados().add(new SaoPaulo());
		o.getEstados().add(new MinasGerais());
		o.getEstados().add(new RioDeJaneiro());
		o.getEstados().add(new Bahia());
		o.getEstados().add(new Amazonas());
		o.getEstados().add(new Pernambuco());
		o.setMensal(orc);
		for(Estado e : o.getEstados()) {
			System.out.println(e.getClass().getSimpleName() + " = " + e.getVerba());
		}
		orcamento.add(o);
	}
	
	public void listaMinistrosSecretarios() {
		System.out.println("----Ministros do Estado----");
		for(Ministro m : ministros) {
			System.out.println(m.getClass().getSimpleName() + " = " + m.getNome());
		}
		System.out.println();
		System.out.println("----Secretarios----");
		for(Ministro m : ministros) {
			if(m.getSecretario() != null)
				System.out.println("Secretario da " + m.getClass().getSimpleName() + " = " + m.getSecretario().getNome());
		}
	}
		
}
