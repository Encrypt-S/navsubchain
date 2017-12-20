from distutils.core import setup
setup(name='SUBspendfrom',
      version='1.0',
      description='Command-line utility for subchain "coin control"',
      author='Gavin Andresen',
      author_email='gavin@subchainfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
