project('libslac99', 'c',
  version: '1.0',
)

src_lst = []
inc_lst = [
	include_directories('include'),
]
dep_lst = [
  subproject('pyslalib').get_variable('lib_sla_dep'),
]

subdir('include')
subdir('src')

lib_slac99 = library(
  'slac99',
  src_lst,
  include_directories: inc_lst,
  dependencies: dep_lst,
  install: true,
)

lib_slac99_dep = declare_dependency(
  include_directories: inc_lst,
  dependencies: dep_lst,
  link_with: lib_slac99,
)

subdir('tests')