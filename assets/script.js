document.addEventListener("DOMContentLoaded", () => {
  const counters = document.querySelectorAll("[data-count]");

  counters.forEach((counter) => {
    const target = Number(counter.dataset.count);
    const duration = 1200;
    let start = null;

    const animate = (timestamp) => {
      if (!start) start = timestamp;
      const progress = Math.min((timestamp - start) / duration, 1);
      const value = target * progress;
      counter.textContent = target < 5 ? value.toFixed(1) : Math.round(value);

      if (progress < 1) {
        requestAnimationFrame(animate);
      } else {
        counter.textContent = target < 5 ? target.toFixed(1) : target;
      }
    };

    requestAnimationFrame(animate);
  });
});
