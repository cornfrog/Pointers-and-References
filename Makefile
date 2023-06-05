all:
	@gcc -fsanitize=address -fno-omit-frame-pointer -g point-ref.c -o point-ref 
	@mv point-ref bin
	@echo MAKE Success: use \'make run\' to run

run:
	@./bin/point-ref

clean:
	@rm bin/point-ref
	@echo MAKE CLEAN Success: use \'make\' to get program back

