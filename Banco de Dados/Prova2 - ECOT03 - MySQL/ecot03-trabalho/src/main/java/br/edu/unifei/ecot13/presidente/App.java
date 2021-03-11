package br.edu.unifei.ecot13.presidente;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

public class App {

	public static void main(String[] args) {

		EntityManagerFactory emf = Persistence.createEntityManagerFactory("presidentePU");
		EntityManager em = emf.createEntityManager();
		em.getTransaction().begin();
			
			Educacao me = new Educacao();
			me.setNome("Abraham Weintraub");
			me.setIdade(48);
			me.setCpf("888.777.999-88");
			me.setRg("RJ-11.782.466");
			me.setPartido("PSL");
					
			Turismo mt = new Turismo();
			mt.setNome("Marcelo Álvaro Antônio");
			mt.setIdade(46);
			mt.setCpf("444.555.666-11");
			mt.setRg("RJ-18.189.156");
			mt.setPartido("PL");
									
			Cidadania mc = new Cidadania();
			mc.setNome("Onyx Lorenzoni");
			mc.setIdade(65);
			mc.setCpf("333.666.888-11");
			mc.setRg("PA-15.129.426");
			mc.setPartido("DEM");
									
			Cultura mcl = new Cultura();
			mcl.setNome("Damares Alves");
			mcl.setIdade(56);
			mcl.setCpf("145.406.089-55");
			mcl.setRg("PE-12.789.456");
			mcl.setPartido("Sem partido");
									
			Justica mj = new Justica();
			mj.setNome("André Mendonça");
			mj.setIdade(47);
			mj.setCpf("893.126.745-65");
			mj.setRg("SA-12.689.006");
			mj.setPartido("Sem partido");

			Secretario seEcom = new Secretario();
			seEcom.setNome("João da Silva");
			seEcom.setIdade(34);
			seEcom.setCpf("234.123.345-77");
			seEcom.setRg("MG-36.456.455");
			seEcom.setPartido("Sem partido");
									
			Economia mec = new Economia();
			mec.setNome("Paulo Guedes");
			mec.setIdade(70);
			mec.setCpf("253.636.009-59");
			mec.setRg("RJ-78.029.123");
			mec.setPartido("Sem partido");
			mec.contrataSecretario(seEcom);
			seEcom.setMinistro(mec);
											
			PresidenteBrasil p = new PresidenteBrasil();
			p.setNome("Jair Messias Bolsonaro");
			p.setIdade(65);
			p.setCpf("123.456.789-55");
			p.setRg("RJ-12.789.456");
			p.setPartido("Sem partido");
			System.out.println("Olá, eu sou " + p.getNome() + ", presidente do Brasil!");
			System.out.println();
			p.aprovaLei("123-78", "Auxílio Emergencial");
			System.out.println();
			p.fazPronunciamento(" Se o virus afeta só os idosos, porque fechar escolas?");
			System.out.println();
			System.out.println("----Orçamento dos Estados----");
			p.repassaOrcamento(1000000);
			p.nomeiaMinistro(me);
			p.nomeiaMinistro(mt);
			p.nomeiaMinistro(mc);
			p.nomeiaMinistro(mcl);
			p.nomeiaMinistro(mj);
			p.nomeiaMinistro(mec);
			
			em.persist(me);
			em.persist(mt);
			em.persist(mc);
			em.persist(mcl);
			em.persist(mj);
			em.persist(mec);
			em.persist(p);
			em.persist(seEcom);
		

			System.out.println();
			p.listaMinistrosSecretarios();
			
		em.getTransaction().commit();
		em.close();
		emf.close();
		
	}
}