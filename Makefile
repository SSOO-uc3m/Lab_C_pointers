.PHONY: clean All

All:
	@echo "----------Building project:[ Problem_06 - Debug ]----------"
	@cd "Problem_06" && "$(MAKE)" -f  "Problem_06.mk"
clean:
	@echo "----------Cleaning project:[ Problem_06 - Debug ]----------"
	@cd "Problem_06" && "$(MAKE)" -f  "Problem_06.mk" clean
