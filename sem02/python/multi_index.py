# -*- coding: utf-8 -*-
"""
Created on Wed Apr  8 13:17:56 2026

@author: Administrator
"""
import pandas as pd

data = {
    'Score' : [],
    'year': [],
    'month': []      
}

df = pd.set_inde(['year', 'month'])

df.groupby(level='year').mean()