/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1LaMaInterface"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1LaMaInterface.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "LaMaInterfacePdu.h"

/*
 * This type is implemented using NULL,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LaMaInterfacePdu_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (5 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LaMaInterfacePdu = {
	"LaMaInterfacePdu",
	"LaMaInterfacePdu",
	&asn_OP_NULL,
	asn_DEF_LaMaInterfacePdu_tags_1,
	sizeof(asn_DEF_LaMaInterfacePdu_tags_1)
		/sizeof(asn_DEF_LaMaInterfacePdu_tags_1[0]), /* 1 */
	asn_DEF_LaMaInterfacePdu_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaMaInterfacePdu_tags_1)
		/sizeof(asn_DEF_LaMaInterfacePdu_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NULL_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

