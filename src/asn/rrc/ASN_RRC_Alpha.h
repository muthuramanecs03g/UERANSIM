/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_Alpha_H_
#define	_ASN_RRC_Alpha_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_Alpha {
	ASN_RRC_Alpha_alpha0	= 0,
	ASN_RRC_Alpha_alpha04	= 1,
	ASN_RRC_Alpha_alpha05	= 2,
	ASN_RRC_Alpha_alpha06	= 3,
	ASN_RRC_Alpha_alpha07	= 4,
	ASN_RRC_Alpha_alpha08	= 5,
	ASN_RRC_Alpha_alpha09	= 6,
	ASN_RRC_Alpha_alpha1	= 7
} e_ASN_RRC_Alpha;

/* ASN_RRC_Alpha */
typedef long	 ASN_RRC_Alpha_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_RRC_Alpha_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_Alpha;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_Alpha_specs_1;
asn_struct_free_f ASN_RRC_Alpha_free;
asn_struct_print_f ASN_RRC_Alpha_print;
asn_constr_check_f ASN_RRC_Alpha_constraint;
ber_type_decoder_f ASN_RRC_Alpha_decode_ber;
der_type_encoder_f ASN_RRC_Alpha_encode_der;
xer_type_decoder_f ASN_RRC_Alpha_decode_xer;
xer_type_encoder_f ASN_RRC_Alpha_encode_xer;
per_type_decoder_f ASN_RRC_Alpha_decode_uper;
per_type_encoder_f ASN_RRC_Alpha_encode_uper;
per_type_decoder_f ASN_RRC_Alpha_decode_aper;
per_type_encoder_f ASN_RRC_Alpha_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_Alpha_H_ */
#include <asn_internal.h>
