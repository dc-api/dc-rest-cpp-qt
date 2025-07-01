/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIWebhookSlackEmbed.h
 *
 * 
 */

#ifndef OAIWebhookSlackEmbed_H
#define OAIWebhookSlackEmbed_H

#include <QJsonObject>

#include "OAIWebhookSlackEmbedField.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIWebhookSlackEmbedField;

class OAIWebhookSlackEmbed : public OAIObject {
public:
    OAIWebhookSlackEmbed();
    OAIWebhookSlackEmbed(QString json);
    ~OAIWebhookSlackEmbed() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getTitleLink() const;
    void setTitleLink(const QString &title_link);
    bool is_title_link_Set() const;
    bool is_title_link_Valid() const;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QString getColor() const;
    void setColor(const QString &color);
    bool is_color_Set() const;
    bool is_color_Valid() const;

    qint32 getTs() const;
    void setTs(const qint32 &ts);
    bool is_ts_Set() const;
    bool is_ts_Valid() const;

    QString getPretext() const;
    void setPretext(const QString &pretext);
    bool is_pretext_Set() const;
    bool is_pretext_Valid() const;

    QString getFooter() const;
    void setFooter(const QString &footer);
    bool is_footer_Set() const;
    bool is_footer_Valid() const;

    QString getFooterIcon() const;
    void setFooterIcon(const QString &footer_icon);
    bool is_footer_icon_Set() const;
    bool is_footer_icon_Valid() const;

    QString getAuthorName() const;
    void setAuthorName(const QString &author_name);
    bool is_author_name_Set() const;
    bool is_author_name_Valid() const;

    QString getAuthorLink() const;
    void setAuthorLink(const QString &author_link);
    bool is_author_link_Set() const;
    bool is_author_link_Valid() const;

    QString getAuthorIcon() const;
    void setAuthorIcon(const QString &author_icon);
    bool is_author_icon_Set() const;
    bool is_author_icon_Valid() const;

    QString getImageUrl() const;
    void setImageUrl(const QString &image_url);
    bool is_image_url_Set() const;
    bool is_image_url_Valid() const;

    QString getThumbUrl() const;
    void setThumbUrl(const QString &thumb_url);
    bool is_thumb_url_Set() const;
    bool is_thumb_url_Valid() const;

    QList<OAIWebhookSlackEmbedField> getFields() const;
    void setFields(const QList<OAIWebhookSlackEmbedField> &fields);
    bool is_fields_Set() const;
    bool is_fields_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_title_link;
    bool m_title_link_isSet;
    bool m_title_link_isValid;

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QString m_color;
    bool m_color_isSet;
    bool m_color_isValid;

    qint32 m_ts;
    bool m_ts_isSet;
    bool m_ts_isValid;

    QString m_pretext;
    bool m_pretext_isSet;
    bool m_pretext_isValid;

    QString m_footer;
    bool m_footer_isSet;
    bool m_footer_isValid;

    QString m_footer_icon;
    bool m_footer_icon_isSet;
    bool m_footer_icon_isValid;

    QString m_author_name;
    bool m_author_name_isSet;
    bool m_author_name_isValid;

    QString m_author_link;
    bool m_author_link_isSet;
    bool m_author_link_isValid;

    QString m_author_icon;
    bool m_author_icon_isSet;
    bool m_author_icon_isValid;

    QString m_image_url;
    bool m_image_url_isSet;
    bool m_image_url_isValid;

    QString m_thumb_url;
    bool m_thumb_url_isSet;
    bool m_thumb_url_isValid;

    QList<OAIWebhookSlackEmbedField> m_fields;
    bool m_fields_isSet;
    bool m_fields_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIWebhookSlackEmbed)

#endif // OAIWebhookSlackEmbed_H
