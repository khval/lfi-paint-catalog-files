
all: lfipaint.ct updated

clean:
	delete lfipaint.#?(c|h)
	list catalogs/#?/#?.catalog LFORMAT "DELETE *"%p%n*"" >T:del_catalog
	execute T:del_catalog

lfi-paint.ct: lfipaint.cd
	CATCOMP lfipaint.cd CTFILE lfipaint.ct

updated: lfipaint.cd
	protect update +s
	update
##	date > updated
