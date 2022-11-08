from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
  name = request.args.get("name", "world")
  # if "name" in request.args:
  #   name = request.args["name"]
  # else:
  #   name = "world"
  return render_template("index.html", name=name)
