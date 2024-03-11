import { ComponentFixture, TestBed } from '@angular/core/testing';

import { STRINTRComponent } from './strintr.component';

describe('STRINTRComponent', () => {
  let component: STRINTRComponent;
  let fixture: ComponentFixture<STRINTRComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ STRINTRComponent ]
    })
    .compileComponents();

    fixture = TestBed.createComponent(STRINTRComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
