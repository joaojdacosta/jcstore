
SUBDIRS =  jcstore tests 

#
# Dados sobre o grupo e regime
# REGIME = preencher com D ou N consoante Diurno ou Nocturno
# GRUPO = indicar o numero do grupo
# ALUNO1/ALUNO2/ALUNO3/ALUNO4 = indicar contacto telefonico, nome e a conta GitHub de cada membro do grupo
#
REGIME=
GRUPO=
ALUNO1=
ALUNO2=
ALUNO3=
ALUNO4=

CFLAGS = -g -O0 -Wall -pthread

export DEFS
export CFLAGS

all: build

build:
	@list='$(SUBDIRS)'; for p in $$list; do \
	  echo "Building $$p"; \
	  $(MAKE) -C $$p; \
	done

clean:
	@list='$(SUBDIRS)'; for p in $$list; do \
	  echo "Cleaning $$p"; \
	  $(MAKE) clean -C $$p; \
	done

package: clean zip

zip:
ifndef REGIME
	@echo "ERROR: Must setup macro 'REGIME' correcly."
else
ifndef GRUPO
	@echo "ERROR: Must setup macro 'GRUPO' correcly."
else
	tar -czf project-$(REGIME)-$(GRUPO)-$(ALUNO4)-$(ALUNO1)-$(ALUNO2)-$(ALUNO3).tgz * 
endif
endif
endif
