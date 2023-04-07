# AACR_RefPanelCompare

![Alt text](/src/23_poster.png)


### ABSTRACT
---
The emergence of the large-scale public database facilitates genomic association study. An unprecedented number of samples emerged, which can elucidate valid genetic inferences and contribute to finding novel associations within various phenotypes. Most of the samples originated from European-based ancestry, however, which leads to the disparity of study for relatively minor ethnic groups. Unlike a European ancestry group, Asian has a limited participant number and information.

The TOPMed consortium consists of ~180k participants, over 60% of the 180k samples are of predominantly non-European ancestry, and Asian ancestry consisted of 8 % in total. The 1000 Genomes Project(1KG) contains 2,504 individuals from 26 populations and has sequenced 698 samples in additional to 2,504 in 30x coverage. All those projects provide a reference panel to impute missing variants to improve association power for Genome-Wide Association Study (GWAS) subsequently. The information is limited to which imputation panel is the one having the best utility, we compared the imputation results using those reference panels.

Korean Genome Project (Korea1K), including 1094 whole genomes are public datasets consisting of only Korean (East Asian) origin. On GRCh38, Korea1K variants consisting of 59,463,566 variants in total, 99.6% with MAF <1% rare variant, only 35.7% of those rare variants passed from GATK Best Practice VQSR filter.  With Korea1K data, we have downsampled the result into the exonic level, imputed with reference panels, and seen the consequences for which reference panel shows the best performances. 

1KG reference panels deliver novel rare variants only in 0.1 to 0.38 fold of filter passed rare variant in 1KG phase3 and 1KG phase3 30X respectively, but TOPMed imputation panel shows novel variants over 1.65 fold increase in the number of rare variants. With well-imputed variants R2 over 0.8, all three reference panel shows poor conservation which only 0.009 % of rare variant are rescued. Because the reference panels don’t represent the population structure enough, variants restored are quite underrepresented. Despite a surge of the Asian fraction in the public consortium, it tells us that it did not pass a bar of representation and asks for an augmentation for the Asian population. 

Our finding highlights both the utility and limitation of the imputation reference panel for Asian ancestry. The reproductivity of rare variants is quite underwhelming. Nonetheless, novel variants filled by imputation are promising for additional power of various association studies.

