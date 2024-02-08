/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/cdd/ITS_Container.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#ifndef	_SemiAxisLength_H_
#define	_SemiAxisLength_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SemiAxisLength {
	SemiAxisLength_oneCentimeter	= 1,
	SemiAxisLength_outOfRange	= 4094,
	SemiAxisLength_unavailable	= 4095
} e_SemiAxisLength;

/* SemiAxisLength */
typedef long	 SemiAxisLength_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SemiAxisLength_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SemiAxisLength;
asn_struct_free_f SemiAxisLength_free;
asn_struct_print_f SemiAxisLength_print;
asn_constr_check_f SemiAxisLength_constraint;
ber_type_decoder_f SemiAxisLength_decode_ber;
der_type_encoder_f SemiAxisLength_encode_der;
xer_type_decoder_f SemiAxisLength_decode_xer;
xer_type_encoder_f SemiAxisLength_encode_xer;
jer_type_encoder_f SemiAxisLength_encode_jer;
oer_type_decoder_f SemiAxisLength_decode_oer;
oer_type_encoder_f SemiAxisLength_encode_oer;
per_type_decoder_f SemiAxisLength_decode_uper;
per_type_encoder_f SemiAxisLength_encode_uper;
per_type_decoder_f SemiAxisLength_decode_aper;
per_type_encoder_f SemiAxisLength_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SemiAxisLength_H_ */
#include <asn_internal.h>
