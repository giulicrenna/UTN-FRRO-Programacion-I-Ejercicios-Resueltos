datos: list[float] = [0.15, 0.34, 0.96, 0.68, 0.9, 0.93, 0.32, 0.47, 0.15, 0.91, 0.85, 0.3, 0.58, 0.0, 0.09, 0.7, 0.34, 0.12, 0.38, 0.92, 0.21, 0.7, 0.54, 0.7, 0.84, 0.98, 0.42, 0.07, 0.38, 0.58, 0.3, 0.94, 0.91, 0.99, 0.63, 0.41, 0.27, 0.56, 0.31, 0.58, 0.86, 0.98, 0.3, 0.01, 0.2, 0.85, 0.62, 0.19, 0.78, 0.75, 0.96, 0.06, 0.88, 0.29, 0.44, 0.27, 0.07, 0.68, 0.75, 0.79, 0.51, 0.68, 0.49, 0.87, 0.81, 0.33, 0.57, 0.77, 0.38, 0.04, 0.15, 0.56, 0.25, 0.4, 0.12, 0.84, 0.68, 0.53, 0.75, 0.36, 0.4, 0.72, 0.74, 0.25, 0.91, 0.41, 0.57, 0.68, 0.08, 0.63, 0.07, 0.56, 0.65, 0.15, 0.05, 0.78, 0.32, 0.68, 0.31, 0.26, 0.83, 0.52, 0.05, 0.8, 0.9, 0.49, 0.5, 0.75, 0.08, 0.06, 0.62, 0.86, 0.86, 1.0, 0.45, 0.53, 0.7, 0.2, 0.82, 0.0, 0.69, 0.67, 0.67, 0.61, 0.98, 0.09, 0.38, 0.07, 0.31, 0.47, 0.88, 0.49, 0.14, 0.25, 0.83, 0.35, 0.38, 0.26, 0.04, 0.51, 0.58, 0.56, 0.92, 0.19, 0.51, 0.34, 0.03, 0.48, 0.78, 0.08, 0.22, 0.33, 0.38, 0.54, 0.01, 0.33, 0.4, 0.23, 0.08, 0.04, 0.24, 0.54, 0.84, 0.95, 0.37, 0.72, 0.68, 0.48, 0.18, 0.98, 0.34, 0.84, 0.98, 0.97, 0.5, 0.3, 0.45, 0.23, 0.54, 0.83, 0.57, 0.12, 0.24, 0.12, 0.44, 0.43, 0.75, 0.84, 0.5, 0.41, 0.24, 0.67, 0.91, 0.17, 0.8, 0.54, 0.79, 0.53, 0.01, 0.59, 0.88, 0.52, 0.51, 0.36, 0.87, 0.07, 0.17, 0.09, 0.83, 0.22, 0.18, 0.13, 0.79, 0.02, 0.87, 0.01, 0.57, 0.65, 0.16, 0.67, 0.09, 0.61, 0.38, 0.21, 0.88, 0.46, 0.07, 0.79, 0.35, 0.62, 0.15, 0.8, 0.86, 0.27, 0.54, 0.34, 0.25, 0.51, 0.23, 0.48, 0.92, 0.3, 0.7, 0.09, 0.32, 0.45, 0.29, 0.14, 0.91, 0.04, 0.4, 0.2, 0.09, 0.38, 0.55, 0.64, 0.22, 0.27, 0.27, 0.5, 0.03, 0.57, 0.66, 0.86, 0.28, 0.23, 0.37, 0.01, 0.29, 0.39, 1.0, 0.22, 0.03, 0.71, 0.09, 0.27, 0.3, 0.57, 0.71, 0.88, 0.06, 0.67, 0.15, 0.27, 0.22, 0.7, 0.83, 0.15, 0.95, 0.08, 0.14, 0.57, 0.39, 0.15, 0.74, 0.35, 0.21, 0.34, 0.55, 0.11, 0.63, 0.77, 0.62, 0.97, 0.96, 0.62, 0.81, 0.82, 0.51, 0.02, 0.59, 0.61, 0.24, 0.62, 0.89, 0.25, 0.31, 0.26, 0.23, 0.28, 0.72, 0.33, 0.33, 0.5, 0.45, 0.41, 0.16, 0.17, 0.38, 0.82, 0.11, 0.57, 0.76, 0.31, 0.91, 0.58, 0.68, 0.77, 0.16, 0.28, 0.98, 0.99, 0.23, 0.79, 0.18, 0.17, 0.94, 0.85, 0.93, 0.13, 0.51, 0.93, 0.34, 0.32, 0.75, 0.19, 0.05, 0.69, 0.31, 0.85, 0.25, 0.06, 0.89, 0.2, 0.03, 0.08, 0.32, 0.14, 0.45, 0.8, 0.6, 0.86, 0.57, 0.52, 0.63, 0.62, 0.18, 0.67, 0.74, 0.01, 0.14, 0.63, 0.82, 0.94, 0.55, 0.62, 0.69, 0.83, 0.54, 0.13, 0.59, 0.54, 0.02, 0.41, 0.16, 0.32, 0.18, 0.13, 0.72, 0.06, 0.02, 0.76, 0.61, 0.82, 0.43, 0.65, 0.56, 0.92, 0.82, 0.57, 0.69, 0.31, 0.65, 0.0, 0.84, 0.73, 0.32, 0.26, 0.43, 0.74, 0.46, 0.28, 0.3, 0.84, 1.0, 0.7, 0.39, 0.71, 0.38, 0.53, 0.25, 0.98, 0.24, 0.33, 0.98, 0.28, 0.92, 0.2, 0.42, 0.01, 0.64, 0.59, 0.72, 0.56, 0.85, 0.17, 0.09, 0.42, 0.31, 0.69, 0.82, 0.35, 0.6, 0.1, 0.88, 0.85, 0.77, 0.25, 0.98, 0.78, 0.42, 0.79, 0.08, 0.34, 0.42, 0.66, 0.44, 0.59, 0.69, 0.05, 0.92, 0.95, 0.76, 0.05, 0.87, 0.6, 0.03, 0.04, 0.26, 0.83, 1.0, 0.89, 0.27, 0.52, 0.87, 0.64, 0.07, 0.11, 0.44, 0.04, 0.67, 0.87, 0.84, 0.31, 0.93, 0.53, 0.59, 0.27, 0.69, 0.74, 0.07, 0.84, 0.19, 0.19, 0.99, 0.74, 0.83, 0.84, 0.68, 0.08, 0.24, 0.27, 0.31, 0.36, 0.81, 0.59, 0.96, 0.26, 0.49, 0.15, 0.47, 0.35, 0.38, 0.94, 0.44, 0.29, 0.98, 0.79, 0.37, 0.95, 0.61, 0.38, 0.34, 0.65, 0.1, 0.9, 0.49, 0.9, 0.3, 0.89, 0.04, 0.24, 0.32, 0.03, 0.26, 0.18, 0.33, 0.6, 0.17, 0.77, 0.47, 0.44, 0.05, 0.96, 0.43, 0.26, 0.08, 0.29, 0.87, 0.93, 0.85, 0.19, 0.45, 0.27, 0.22, 0.9, 0.96, 0.22, 0.2, 0.22, 0.4, 0.31, 0.1, 0.65, 0.01, 0.1, 0.7, 0.34, 0.66, 0.1, 0.56, 0.75, 0.36, 0.73, 0.89, 0.37, 0.95, 0.36, 0.15, 0.24, 0.13, 0.73, 0.56, 0.06, 0.75, 0.56, 0.91, 0.04, 0.86, 0.24, 0.12, 0.16, 0.44, 0.48, 0.48, 0.63, 0.86, 0.33, 0.2, 0.62, 0.83, 0.05, 0.86, 0.3, 0.28, 0.29, 0.64, 0.77, 0.98, 0.24, 0.09, 0.37, 0.99, 0.66, 0.17, 0.01, 0.05, 0.24, 0.48, 0.06, 0.47, 0.58, 0.82, 0.0, 0.73, 0.66, 0.59, 0.66, 0.75, 0.3, 0.31, 0.68, 0.61, 0.08, 0.23, 0.29, 0.29, 0.77, 0.82, 0.58, 0.14, 0.51, 0.96, 0.72, 0.42, 0.18, 0.67, 0.93, 0.67, 0.23, 0.09, 0.29, 0.64, 0.19, 0.79, 0.15, 0.98, 0.65, 0.71, 0.58, 0.9, 0.87, 0.28, 0.26, 0.01, 0.99, 0.81, 0.53, 0.19, 0.21, 0.07, 0.94, 0.59, 0.14, 0.92, 0.84, 0.42, 0.38, 0.63, 0.01, 0.77, 0.57, 0.66, 0.89, 0.84, 0.54, 0.64, 0.77, 0.97, 0.9, 0.19, 0.76, 0.87, 0.02, 0.5, 0.84, 0.43, 0.39, 0.4, 0.66, 0.73, 0.45, 0.36, 0.49, 0.62, 0.31, 0.39, 0.41, 0.34, 0.76, 0.98, 0.71, 0.01, 0.48, 0.03, 0.58, 0.92, 0.86, 0.02, 0.28, 0.82, 0.64, 0.49, 0.55, 0.42, 0.39, 0.95, 0.37, 0.28, 0.57, 0.64, 0.96, 0.76, 0.9, 0.56, 0.96, 0.42, 0.79, 0.12, 0.69, 0.37, 0.77, 0.83, 0.97, 0.32, 0.28, 0.33, 0.43, 0.53, 0.88, 0.65, 0.45, 0.17, 0.32, 0.35, 0.85, 0.52, 0.26, 0.92, 0.06, 0.29, 0.52, 0.52, 0.56, 0.45, 0.12, 0.79, 0.77, 0.83, 0.66, 0.42, 0.15, 0.44, 0.42, 0.35, 0.92, 0.51, 0.46, 0.03, 0.55, 0.91, 0.78, 0.1, 0.34, 0.13, 0.24, 0.17, 0.67, 0.43, 0.47, 0.98, 0.03, 0.24, 0.33, 0.4, 0.72, 0.04, 0.35, 0.73, 0.57, 0.06, 0.79, 0.15, 0.88, 0.66, 0.81, 0.49, 0.12, 0.64, 0.34, 0.8, 0.56, 0.69, 0.04, 0.1, 0.94, 0.53, 0.72, 0.77, 0.14, 0.24, 0.13, 0.55, 0.84, 0.87, 0.59, 0.09, 0.82, 0.8, 0.13, 0.38, 0.72, 0.78, 0.47, 0.13, 0.54, 0.98, 0.41, 0.12, 0.25, 0.22, 0.66, 0.72, 0.24, 0.52, 0.81, 0.9, 0.85, 0.53, 1.0, 0.75, 0.54, 0.38, 0.89, 0.64, 0.97, 0.05, 0.41, 0.02, 0.72, 0.02, 0.45, 0.19, 0.45, 0.33, 0.88, 0.82, 0.72, 0.47, 0.05, 0.58, 0.5, 0.43, 0.09, 0.04, 0.2, 0.91, 0.45, 0.13, 0.57, 0.05, 1.0, 0.98, 0.63, 0.52, 0.29, 0.52, 0.93, 0.38, 0.32, 0.22, 0.63, 0.57, 0.16, 0.08, 0.88, 0.25, 0.4, 0.15, 0.81, 0.95, 0.97, 0.31, 0.97, 0.63, 0.37, 0.16, 0.56, 0.73, 0.1, 0.19, 0.8, 0.3, 0.45, 0.14, 0.34, 0.28, 0.33, 0.16, 0.93, 0.82, 0.33, 0.86, 0.7, 0.1, 0.07, 0.71, 0.27, 0.41, 0.24, 0.98, 0.35, 0.54, 0.36, 0.75, 0.37, 0.27, 0.69, 0.67, 0.0, 0.26, 0.84, 0.88, 0.08, 0.28, 0.98, 0.83, 0.51, 0.1, 0.98, 0.28, 0.08, 0.63, 0.19, 0.98, 0.59, 0.51, 0.85, 0.16, 0.04, 0.26, 0.63, 0.84, 0.51, 0.98, 0.18, 0.08, 0.12, 0.64, 0.42, 0.02, 0.63, 0.19, 0.25, 0.9, 0.87, 0.71, 0.86, 0.0, 0.89, 0.24, 0.69, 0.01, 0.1, 0.27, 0.81, 0.37, 0.85, 0.06, 0.89]

plt.hist(datos)