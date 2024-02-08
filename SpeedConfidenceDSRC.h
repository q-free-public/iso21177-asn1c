/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/DSRC.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeEnumerated.h>
#ifndef	_SpeedConfidenceDSRC_H_
#define	_SpeedConfidenceDSRC_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedConfidenceDSRC {
	SpeedConfidenceDSRC_unavailable	= 0,
	SpeedConfidenceDSRC_prec100ms	= 1,
	SpeedConfidenceDSRC_prec10ms	= 2,
	SpeedConfidenceDSRC_prec5ms	= 3,
	SpeedConfidenceDSRC_prec1ms	= 4,
	SpeedConfidenceDSRC_prec0_1ms	= 5,
	SpeedConfidenceDSRC_prec0_05ms	= 6,
	SpeedConfidenceDSRC_prec0_01ms	= 7
} e_SpeedConfidenceDSRC;

/* SpeedConfidenceDSRC */
typedef long	 SpeedConfidenceDSRC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedConfidenceDSRC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedConfidenceDSRC;
extern const asn_INTEGER_specifics_t asn_SPC_SpeedConfidenceDSRC_specs_1;
asn_struct_free_f SpeedConfidenceDSRC_free;
asn_struct_print_f SpeedConfidenceDSRC_print;
asn_constr_check_f SpeedConfidenceDSRC_constraint;
ber_type_decoder_f SpeedConfidenceDSRC_decode_ber;
der_type_encoder_f SpeedConfidenceDSRC_encode_der;
xer_type_decoder_f SpeedConfidenceDSRC_decode_xer;
xer_type_encoder_f SpeedConfidenceDSRC_encode_xer;
jer_type_encoder_f SpeedConfidenceDSRC_encode_jer;
oer_type_decoder_f SpeedConfidenceDSRC_decode_oer;
oer_type_encoder_f SpeedConfidenceDSRC_encode_oer;
per_type_decoder_f SpeedConfidenceDSRC_decode_uper;
per_type_encoder_f SpeedConfidenceDSRC_encode_uper;
per_type_decoder_f SpeedConfidenceDSRC_decode_aper;
per_type_encoder_f SpeedConfidenceDSRC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedConfidenceDSRC_H_ */
#include <asn_internal.h>
